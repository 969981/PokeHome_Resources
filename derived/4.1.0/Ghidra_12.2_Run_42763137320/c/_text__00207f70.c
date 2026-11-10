/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00207f70; name: FUN_.text__00207f70
 */


void FUN__text__00207f70(long param_1)

{
  code *pcVar1;
  code *local_a0;
  code *local_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  long local_80 [12];
  
  FUN__text__0012bcbc(param_1 + 0x110,1);
  local_a0 = FUN__text__00208808;
  local_98 = FUN__text__00208830;
  local_90 = &LAB__text__00208834;
  puStack_88 = &LAB__text__00208840;
  local_80[0] = param_1;
  FUN__text__0012c3b0(param_1 + 0x110,0x713a5f,&local_a0);
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


