import { NativeModules } from 'react-native';

type RecordingType = {
  startTranscribe(): Promise<any>;
  stopTranscribe(): Promise<any>;
};

const { Recording } = NativeModules;

export default Recroding as RecordingType;
