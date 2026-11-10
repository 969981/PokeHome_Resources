/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005c51fc; name: FUN_.text__005c51fc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005c51fc(long *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  param_1[7] = 0;
  lVar3 = _DAT_0089f690;
  *(undefined4 *)(param_1 + 8) = 0;
  uVar2 = tpidr_el0;
  uVar2 = uVar2 & 0xffffffffffffe000;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *param_1 = lVar3 + 0x10;
  lVar3 = 0;
  if (uVar2 != 0) {
    if (*(long *)(uVar2 + 0x98) == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = *(long *)(uVar2 + *(long *)(uVar2 + 0x98) * 8 + 0x10);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  lVar1 = _DAT_008a58b0 + 0x50;
  *param_1 = _DAT_008a58b0 + 0x10;
  param_1[1] = lVar3;
  param_1[9] = lVar1;
  memset(param_1 + 0xb,0,0x250);
  FUN__text__006f45e4(param_1 + 0x1b);
  FUN__text__006f45e4(param_1 + 0x20);
  FUN__text__006f45e4(param_1 + 0x25);
  FUN__text__006f45e4(param_1 + 0x2a);
  FUN__text__006f4828(param_1 + 0x2f);
  FUN__text__006f4828((long)param_1 + 0x194);
  FUN__text__006f4828(param_1 + 0x36);
  FUN__text__006f4828((long)param_1 + 0x1cc);
  FUN__text__006f4410(param_1 + 0x3d);
  FUN__text__006f4410(param_1 + 0x43);
  FUN__text__006f4410(param_1 + 0x49);
  FUN__text__006f4410(param_1 + 0x4f);
  param_1[0x59] = 0;
  param_1[0x58] = 0;
  param_1[0x57] = 0;
  param_1[0x56] = 0;
  return;
}


