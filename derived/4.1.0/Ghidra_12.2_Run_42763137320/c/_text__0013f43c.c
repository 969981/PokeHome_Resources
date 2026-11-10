/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0013f43c; name: FUN_.text__0013f43c
 */


void FUN__text__0013f43c(long param_1)

{
  code *pcVar1;
  undefined *local_a0;
  code *local_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  long local_80 [12];
  
  if (1 < *(uint *)(param_1 + 0x648)) {
    *(undefined4 *)(param_1 + 0x648) = 1;
    local_a0 = &DAT__text__00140b24;
    local_98 = FUN__text__00140b58;
    local_90 = &LAB__text__00140b5c;
    puStack_88 = &LAB__text__00140b68;
    local_80[0] = param_1;
    FUN__text__0012c3b0(param_1 + 0x110,0x710294,&local_a0);
    pcVar1 = local_98;
    if (local_98 != (code *)0x0) {
      local_90 = (undefined1 *)0x0;
      puStack_88 = (undefined1 *)0x0;
      local_a0 = (undefined *)0x0;
      local_98 = (code *)0x0;
      (*pcVar1)(local_80);
    }
  }
  return;
}


