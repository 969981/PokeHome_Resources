/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005bceac; name: FUN_.text__005bceac
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005bceac(undefined8 *param_1,long *param_2)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  
  FUN__text__005a7c38(param_1,1,1);
  plVar5 = param_1 + 0x16;
  *plVar5 = 0;
  lVar1 = _DAT_0089ff80;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x1c] = lVar1 + 0x10;
  param_1[0x1b] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x21] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x2e] = 0;
  *param_1 = 0x896260;
  param_1[9] = 0x8962e8;
  param_1[10] = 0x896328;
  lVar1 = (**(code **)(*param_2 + 0x10))(param_2,0x8e0,0x10);
  uVar3 = tpidr_el0;
  uVar3 = uVar3 & 0xffffffffffffe000;
  if (*(long *)(uVar3 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long **)(uVar3 + *(long *)(uVar3 + 0x98) * 8 + 0x18) = param_2;
  *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + 1;
  FUN__text__005bd048();
  *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + -1;
  lVar4 = *plVar5;
  *plVar5 = lVar1;
  if (lVar4 != 0) {
    FUN__text__005be1c0(lVar4);
    (**(code **)(*(long *)param_1[0x17] + 0x18))
              ((long *)param_1[0x17],lVar4,param_1[0x18],param_1[0x19]);
    lVar1 = param_1[0x16];
  }
  param_1[0x17] = param_2;
  param_1[0x18] = 0x8e0;
  param_1[0x19] = 0x10;
  *(undefined8 **)(lVar1 + 8) = param_1;
  pcVar2 = (code *)param_1[0x1f];
  if (pcVar2 != (code *)0x0) {
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    (*pcVar2)(param_1 + 0x22);
  }
  param_1[0x1e] = FUN__text__005c0f50;
  param_1[0x1f] = &DAT__text__005c1044;
  param_1[0x20] = &LAB__text__005c1048;
  param_1[0x21] = &LAB__text__005c1054;
  param_1[0x22] = param_1;
  FUN__text__005ac300(*(undefined8 *)(*_DAT_0089f5b8 + 0x8590),param_1 + 0x1c);
  return;
}


