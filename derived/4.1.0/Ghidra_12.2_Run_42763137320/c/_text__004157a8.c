/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004157a8; name: FUN_.text__004157a8
 */


undefined8 FUN__text__004157a8(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (*(int *)(param_1 + 0xa8) != 0) {
    lVar1 = *(long *)(**(long **)(param_1 + 0xa0) + 0x98);
    if ((lVar1 != 0) &&
       (uVar2 = FUN__text__004d9050(lVar1,param_2,
                                    *(undefined8 *)(**(long **)(param_1 + 0xa0) + 0x90),param_3 & 1)
       , (uVar2 & 1) != 0)) {
      return 1;
    }
  }
  if (*(int *)(param_1 + 0xd8) != 0) {
    lVar1 = *(long *)(**(long **)(param_1 + 0xd0) + 0x98);
    if ((lVar1 != 0) &&
       (uVar2 = FUN__text__004d9050(lVar1,param_2,
                                    *(undefined8 *)(**(long **)(param_1 + 0xd0) + 0x90),param_3 & 1)
       , (uVar2 & 1) != 0)) {
      return 1;
    }
  }
  if (*(int *)(param_1 + 0x108) != 0) {
    lVar1 = *(long *)(**(long **)(param_1 + 0x100) + 0x98);
    if ((lVar1 != 0) &&
       (uVar2 = FUN__text__004d9050(lVar1,param_2,
                                    *(undefined8 *)(**(long **)(param_1 + 0x100) + 0x90),param_3 & 1
                                   ), (uVar2 & 1) != 0)) {
      return 1;
    }
  }
  if (*(int *)(param_1 + 0x138) != 0) {
    lVar1 = *(long *)(**(long **)(param_1 + 0x130) + 0x98);
    if ((lVar1 != 0) &&
       (uVar2 = FUN__text__004d9050(lVar1,param_2,
                                    *(undefined8 *)(**(long **)(param_1 + 0x130) + 0x90),param_3 & 1
                                   ), (uVar2 & 1) != 0)) {
      return 1;
    }
  }
  uVar3 = FUN__text__00419980(param_1,param_2,param_3 & 1);
  return uVar3;
}


