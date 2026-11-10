/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005e9090; name: FUN_.text__005e9090
 */


void FUN__text__005e9090(MutexType *param_1)

{
  uint uVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  
  nn::os::InitializeMutex(param_1,false,0);
  lVar2 = 0;
  lVar4 = 0;
  *(ulong *)(param_1 + 0x20) = (ulong)(param_1 + 0x202f) & 0xffffffffffffe000;
  *(undefined8 *)(param_1 + 0x28) = 0xffffffffffffffff;
  do {
    lVar5 = *(long *)(param_1 + 0x20);
    uVar1 = (uint)((int)lVar2 + (int)lVar5) >> 0xd & 0x7f;
    if (uVar1 != 0x7f) {
      uVar3 = (undefined4)lVar4;
      if (uVar1 == 0) {
        *(undefined4 *)(lVar5 + lVar2) = *(undefined4 *)(param_1 + 0x28);
        *(undefined4 *)(param_1 + 0x28) = uVar3;
        if (*(int *)(param_1 + 0x2c) == -1) {
LAB__text__005e90ec:
          *(undefined4 *)(param_1 + 0x2c) = uVar3;
        }
      }
      else {
        *(undefined4 *)(lVar5 + lVar2) = 0xffffffff;
        if (*(int *)(param_1 + 0x2c) != -1) {
          *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)*(int *)(param_1 + 0x2c) * 0x2000) =
               uVar3;
          goto LAB__text__005e90ec;
        }
        *(undefined4 *)(param_1 + 0x28) = uVar3;
        *(undefined4 *)(param_1 + 0x2c) = uVar3;
      }
    }
    lVar4 = lVar4 + 1;
    lVar2 = lVar2 + 0x2000;
    if (lVar4 == 0x80) {
      return;
    }
  } while( true );
}


