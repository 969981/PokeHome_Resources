/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0037a21c; name: FUN_.text__0037a21c
 */


void FUN__text__0037a21c(undefined8 *param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  FUN__text__005e8634(param_1,0x10000);
  *(undefined4 *)(param_1 + 0x6e) = param_2;
  *param_1 = 0x880500;
  param_1[9] = 0x880578;
  param_1[0xb] = 0x8805a8;
  uVar1 = *param_3;
  uVar3 = param_3[1];
  *(undefined4 *)(param_1 + 0x71) = *(undefined4 *)(param_3 + 2);
  param_1[0x70] = uVar3;
  param_1[0x6f] = uVar1;
  param_1[0x72] = param_3[3];
  param_1[0x73] = param_3[4];
  param_1[0x74] = param_3[5];
  lVar2 = param_3[6];
  param_1[0x75] = lVar2;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  uVar1 = param_3[8];
  uVar3 = param_3[9];
  param_1[0x76] = param_3[7];
  param_1[0x78] = uVar3;
  param_1[0x77] = uVar1;
  *(undefined4 *)(param_1 + 0x79) = 1;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x7a),false,0);
  *(undefined4 *)(param_1 + 0x7e) = 0;
  return;
}


