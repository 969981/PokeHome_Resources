/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0026d534; name: FUN_.text__0026d534
 */


void FUN__text__0026d534(long param_1)

{
  code *pcVar1;
  code *local_a0;
  code *local_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  long local_80 [12];
  
  local_a0 = FUN__text__0026d714;
  local_98 = FUN__text__0026d73c;
  local_90 = &LAB__text__0026d740;
  puStack_88 = &LAB__text__0026d74c;
  local_80[0] = param_1;
  FUN__text__0012c3b0(param_1 + 0x110,0x71da1b,&local_a0);
  pcVar1 = local_98;
  if (local_98 != (code *)0x0) {
    local_90 = (undefined1 *)0x0;
    puStack_88 = (undefined1 *)0x0;
    local_a0 = (code *)0x0;
    local_98 = (code *)0x0;
    (*pcVar1)(local_80);
  }
  return;
}


