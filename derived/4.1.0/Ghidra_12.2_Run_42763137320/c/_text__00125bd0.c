/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00125bd0; name: FUN_.text__00125bd0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00125bd0(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  
  FUN__text__00127410(param_2);
  lVar5 = 0xc80;
  lVar1 = _DAT_0089f878 + 0x10;
  do {
    lVar2 = param_2 + lVar5;
    *(long *)(lVar2 + -0x100) = lVar1;
    if (*(long *)(lVar2 + -0xf8) == 0) {
      *(undefined8 *)(lVar2 + -0xf8) = 0;
      pcVar4 = *(code **)(lVar2 + -0x68);
    }
    else {
      FUN__text__005d9290();
      lVar3 = *(long *)(lVar2 + -0xf8);
      *(undefined8 *)(lVar2 + -0xf8) = 0;
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
      }
      pcVar4 = *(code **)(lVar2 + -0x68);
    }
    if (pcVar4 != (code *)0x0) {
      *(undefined8 *)(lVar2 + -0x60) = 0;
      *(undefined8 *)(lVar2 + -0x58) = 0;
      *(undefined8 *)(lVar2 + -0x70) = 0;
      *(undefined8 *)(lVar2 + -0x68) = 0;
      (*pcVar4)(lVar2 + -0x50);
    }
    pcVar4 = *(code **)(lVar2 + -0xe8);
    if (pcVar4 != (code *)0x0) {
      *(undefined8 *)(lVar2 + -0xe0) = 0;
      *(undefined8 *)(lVar2 + -0xd8) = 0;
      *(undefined8 *)(lVar2 + -0xf0) = 0;
      *(undefined8 *)(lVar2 + -0xe8) = 0;
      (*pcVar4)(lVar2 + -0xd0);
    }
    if (*(long *)(lVar2 + -0xf8) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar2 + -0xf8) + 0x48) + 0x18))();
      *(undefined8 *)(lVar2 + -0xf8) = 0;
    }
    lVar5 = lVar5 + -400;
  } while (lVar5 != 0);
                    /* WARNING: Could not recover jumptable at 0x00125cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,param_2,param_1[1],param_1[2]);
  return;
}


