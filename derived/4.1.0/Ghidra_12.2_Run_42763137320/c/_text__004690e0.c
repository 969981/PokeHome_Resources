/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004690e0; name: FUN_.text__004690e0
 */


void FUN__text__004690e0(long param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long local_18;
  
  if (*(long *)(param_1 + 0x58) != 0) {
    uVar2 = FUN__text__00432910(param_1 + 0x48,param_2,&local_18);
    if ((uVar2 & 1) != 0) {
      uVar1 = *(uint *)(local_18 + 8);
      lVar3 = FUN__text__004329c0(param_1 + 0x48,(ulong)uVar1);
      if (*(long *)(param_1 + 0x48) + (ulong)*(uint *)(param_1 + 0x50) * 8 == lVar3) {
        uVar4 = 1L << ((ulong)uVar1 & 0x3f);
        uVar2 = **(ulong **)(param_1 + 0x58);
        if ((uVar2 & uVar4) != 0) {
          uVar2 = uVar2 & (uVar4 ^ 0xffffffffffffffff);
          **(ulong **)(param_1 + 0x58) = uVar2;
        }
        if (((uVar2 == 0) && (lVar3 = *(long *)(param_1 + 0x58), *(long *)(lVar3 + 8) == 0)) &&
           ((*(long *)(param_1 + 0x38) == 0 || (*(long *)(*(long *)(param_1 + 0x38) + 8) == 0)))) {
          if (*(long *)(lVar3 + 0x10) != 0) {
            *(undefined4 *)(lVar3 + 0x18) = 0;
            FUN__text__00400fc0(0);
            *(undefined8 *)(lVar3 + 0x10) = 0;
            *(undefined4 *)(lVar3 + 0x1c) = 0;
          }
          FUN__text__00400fc0(2,lVar3);
          *(undefined8 *)(param_1 + 0x58) = 0;
        }
      }
      if (local_18 != 0) {
        if (*(long *)(local_18 + 0x18) != 0) {
          FUN__text__00400fc0(0);
        }
        *(long *)(local_18 + 0x18) = 0;
        *(undefined8 *)(local_18 + 0x20) = 0;
        *(undefined4 *)(local_18 + 0x28) = 1;
        FUN__text__00400fc0(2,local_18);
      }
    }
  }
  return;
}


