/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00292708; name: FUN_.text__00292708
 */


undefined8 FUN__text__00292708(long param_1,undefined8 param_2)

{
  long lVar1;
  int extraout_var;
  int extraout_var_00;
  ulong uVar2;
  uint uVar3;
  undefined8 local_40;
  ulong local_38;
  
  local_38 = 0xc35056d0249a792;
  lVar1 = FUN__text__0012cdb0(param_1 + 0x110,&local_38);
  if (lVar1 != 0) {
    FUN__text__003ae440();
    FUN__text__003af76c(lVar1);
    if ((*(char *)(param_1 + 0x87c) == '\0') && (extraout_var_00 <= extraout_var)) {
      uVar2 = FUN__text__00119a6c(param_2,0x80000000);
      if ((uVar2 & 1) == 0) {
        uVar2 = FUN__text__00119a6c(param_2,0x20000000);
        if ((uVar2 & 1) == 0) goto LAB__text__002927bc;
        uVar3 = 1;
      }
      else {
        uVar3 = 0xffffffff;
      }
      local_38 = (ulong)uVar3;
      local_40 = 0x100000000;
      FUN__text__003af784(lVar1,&local_38,&local_40);
    }
  }
LAB__text__002927bc:
  FUN__text__003d17a0(param_1 + 0x890);
  FUN__text__003d17a0(param_1 + 0xef0);
  *(undefined1 *)(param_1 + 0x87c) = 0;
  return 0;
}


