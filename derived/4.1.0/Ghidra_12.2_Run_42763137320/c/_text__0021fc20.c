/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0021fc20; name: FUN_.text__0021fc20
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0021fc20(long param_1)

{
  int iVar1;
  
  FUN__text__00221dc8(*(undefined8 *)(param_1 + 0x1e8));
  iVar1 = FUN__text__0032f710();
  FUN__text__0022194c(*(undefined8 *)(param_1 + 0x1e8),iVar1 / 0x3c,iVar1 % 0x3c);
  *(undefined4 *)(param_1 + 0x1f0) = 4;
  FUN__text__0032ee60();
  FUN__text__0010e28c(*_DAT_0089f5a0,0xd,0);
  return;
}


