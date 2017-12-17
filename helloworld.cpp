#include "helloworld.hpp"

namespace fs = boost::filesystem;

int helloworld() {
  fs::path full_path( fs::initial_path<fs::path>() );
  unsigned long file_count = 0;
  unsigned long dir_count = 0;
  unsigned long other_count = 0;
  fs::directory_iterator end_iter;
  for ( fs::directory_iterator dir_itr( full_path );
          dir_itr != end_iter;
          ++dir_itr )
    {
      
        if ( fs::is_directory( dir_itr->status() ) )
        {
          ++dir_count;
          std::cout << dir_itr->path().filename() << " [directory]\n";
        }
        else if ( fs::is_regular_file( dir_itr->status() ) )
        {
          ++file_count;
          std::cout << dir_itr->path().filename() << "\n";
        }
        else
        {
          ++other_count;
          std::cout << dir_itr->path().filename() << " [other]\n";
        }
}
  cv::Mat hodor = cv::Mat::zeros(10,10,CV_64F);

  google::protobuf::Timestamp timestamp;
  timestamp.PrintDebugString();

  std::cout << "hello" << std::endl;

  AmqpClient::Channel::ptr_t channel = AmqpClient::Channel::Create("localhost");
  std::string consumer_tag = channel->BasicConsume("my_queue", "");
  AmqpClient::Envelope::ptr_t envelope = channel->BasicConsumeMessage(consumer_tag);
  return 0;
}
