/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004ea9b0; name: FUN_.text__004ea9b0
 */


void FUN__text__004ea9b0(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auStack_180 [264];
  long local_78 [3];
  long local_60;
  char local_58;
  
  FUN__text__004f6114(auStack_180,*(undefined8 *)(param_1 + 0x10),0);
  if (local_78[0] != 0) {
    uVar1 = *(uint *)(*(long *)(param_1 + 0x10) + 0x20);
    do {
      FUN__text__004f66c0(*(undefined4 *)(param_1 + 0x4c),auStack_180,param_2,param_3,uVar1 & 0x7f00
                          ,*(undefined4 *)(param_1 + 0x2c));
      if (local_58 != '\0') break;
      lVar3 = FUN__text__004f6970(auStack_180,0);
      lVar3 = FUN__text__004f52d4(local_78,param_2 - lVar3);
      uVar2 = local_60 - lVar3;
      if (uVar2 == 0 || local_60 < lVar3) {
        uVar2 = 0;
      }
      if (param_3 <= uVar2) break;
      (**(code **)(**(long **)(param_1 + 0x10) + 0xb8))(*(long **)(param_1 + 0x10),auStack_180,0);
    } while (local_78[0] != 0);
  }
  FUN__text__004f6174(auStack_180);
  return;
}


