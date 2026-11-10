/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0037a70c; name: FUN_.text__0037a70c
 */


void FUN__text__0037a70c(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  
  FUN__text__005e8634(param_1,0x10000);
  param_1[0x6e] = param_2;
  param_1[0x6f] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *param_1 = 0x8805d0;
  param_1[0xb] = 0x880678;
  param_1[9] = 0x880648;
  param_1[0x70] = 0xcbf29ce484222645;
  param_1[0x71] = 0x70f683;
  param_1[0x70] = param_3[1];
  param_1[0x71] = param_3[2];
  param_1[0x72] = param_3[3];
  lVar2 = param_3[4];
  if (lVar2 == 0) {
    param_1[0x73] = 0;
    *(int *)(param_1 + 0x74) = (int)param_3[5];
    lVar2 = param_3[3];
  }
  else {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    lVar1 = param_1[0x73];
    param_1[0x73] = lVar2;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
    *(int *)(param_1 + 0x74) = (int)param_3[5];
    lVar2 = param_3[3];
  }
  if (lVar2 == 0) {
    param_1[0x6f] = *param_3;
  }
  else {
    lVar2 = *param_3;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    }
    lVar1 = param_1[0x6f];
    param_1[0x6f] = lVar2;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
  }
  *(undefined4 *)(param_1 + 0x75) = 1;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x76),false,0);
  return;
}


