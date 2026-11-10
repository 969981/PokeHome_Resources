/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004c3960; name: FUN_.text__004c3960
 */


void FUN__text__004c3960(long param_1,undefined8 param_2,uint param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if ((*(byte *)(param_1 + 0x70) >> 2 & 1) != 0) {
    return;
  }
  FUN__text__004470f0();
  if ((param_3 != 0) && ((*(byte *)(param_1 + 0x70) >> 1 & 1) == 0)) {
    lVar2 = *(long *)(param_1 + 0x68);
    if (lVar2 != 0) {
      lVar4 = 0;
      do {
        while (lVar3 = lVar2, *(uint *)(lVar3 + 0xc) < param_3) {
          lVar2 = *(long *)(lVar3 + 0x10);
          plVar1 = (long *)(param_1 + 0x68);
          if (*(long *)(param_1 + 0x68) != lVar3) {
            plVar1 = (long *)(lVar4 + 0x10);
          }
          *plVar1 = lVar2;
          if (*(long *)(param_1 + 0x60) == lVar3) {
            *(long *)(param_1 + 0x60) = lVar4;
          }
          FUN__text__00446f40(param_1,param_2,lVar3,*(undefined4 *)(lVar3 + 0xc),0,0,0);
          FUN__text__00400fc0(0,lVar3);
          if (lVar2 == 0) goto LAB__text__004c3a2c;
        }
        *(uint *)(lVar3 + 0xc) = *(uint *)(lVar3 + 0xc) - param_3;
        lVar2 = *(long *)(lVar3 + 0x10);
        lVar4 = lVar3;
      } while (*(long *)(lVar3 + 0x10) != 0);
    }
  }
LAB__text__004c3a2c:
  FUN__text__00447104(param_1);
  return;
}


