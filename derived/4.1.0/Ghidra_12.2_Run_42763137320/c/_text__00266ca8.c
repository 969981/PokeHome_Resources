/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00266ca8; name: FUN_.text__00266ca8
 */


void FUN__text__00266ca8(long param_1)

{
  code *pcVar1;
  code *local_b0;
  code *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  long alStack_90 [12];
  
  FUN__text__0012bcbc(param_1 + 0x110,1);
  local_b0 = FUN__text__002677b8;
  local_a8 = FUN__text__002677e0;
  local_a0 = &LAB__text__002677e4;
  local_98 = &LAB__text__002677f0;
  alStack_90[0] = param_1;
  FUN__text__0012c3b0(param_1 + 0x110,0x71028b,&local_b0);
  pcVar1 = local_a8;
  if (local_a8 != (code *)0x0) {
    local_a0 = (undefined1 *)0x0;
    local_98 = (undefined1 *)0x0;
    local_b0 = (code *)0x0;
    local_a8 = (code *)0x0;
    (*pcVar1)(alStack_90);
  }
  *(undefined1 *)(param_1 + 0xc610) = 1;
  return;
}


