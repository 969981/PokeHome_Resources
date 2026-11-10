/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0048ccb0; name: FUN_.text__0048ccb0
 */


void FUN__text__0048ccb0(long *param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  
  if ((int)param_1[1] == 0) {
LAB__text__0048cd68:
    if (*param_1 != 0) {
      *(undefined4 *)(param_1 + 1) = 0;
      FUN__text__00400fc0(0);
      *param_1 = 0;
      *(undefined4 *)((long)param_1 + 0xc) = 0;
    }
    return;
  }
  lVar3 = *(long *)*param_1;
  if (lVar3 == 0) {
    uVar2 = 0;
    do {
      if ((int)param_1[1] - 1 == uVar2) goto LAB__text__0048cd68;
      lVar3 = ((long *)*param_1)[uVar2 + 1];
      uVar2 = uVar2 + 1;
    } while (lVar3 == 0);
  }
  else {
    uVar2 = 0;
  }
  do {
    do {
      if (*(long *)(lVar3 + 0x10) != 0) {
        *(undefined4 *)(lVar3 + 0x18) = 0;
        FUN__text__00400fc0(0);
        *(undefined8 *)(lVar3 + 0x10) = 0;
        *(undefined4 *)(lVar3 + 0x1c) = 0;
      }
      lVar3 = *(long *)(lVar3 + 0x68);
    } while (lVar3 != 0);
    uVar1 = *(uint *)(param_1 + 1);
    if (uVar1 <= (int)uVar2 + 1U) {
      uVar1 = (int)uVar2 + 1;
    }
    do {
      if (uVar1 - 1 == (int)uVar2) goto LAB__text__0048cd68;
      uVar2 = (ulong)((int)uVar2 + 1);
      lVar3 = *(long *)(*param_1 + uVar2 * 8);
    } while (lVar3 == 0);
  } while( true );
}


