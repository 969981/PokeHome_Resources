/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002928b8; name: FUN_.text__002928b8
 */


void FUN__text__002928b8(long param_1,undefined4 param_2)

{
  code *pcVar1;
  code *local_b0;
  code *local_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  long local_90 [12];
  
  local_b0 = FUN__text__00293f00;
  local_a8 = FUN__text__00293f28;
  local_a0 = &LAB__text__00293f2c;
  puStack_98 = &LAB__text__00293f38;
  local_90[0] = param_1;
  FUN__text__0012c3b0(param_1 + 0x110,0x71028b,&local_b0);
  pcVar1 = local_a8;
  if (local_a8 != (code *)0x0) {
    local_a0 = (undefined1 *)0x0;
    puStack_98 = (undefined1 *)0x0;
    local_b0 = (code *)0x0;
    local_a8 = (code *)0x0;
    (*pcVar1)(local_90);
  }
  FUN__text__0028f1e4(param_1,0xbef4fe2029a956e9);
  *(undefined4 *)(param_1 + 0x878) = param_2;
  FUN__text__00291050(param_1);
  return;
}


