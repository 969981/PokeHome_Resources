/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0027493c; name: FUN_.text__0027493c
 */


void FUN__text__0027493c(long param_1)

{
  code *pcVar1;
  code *local_130;
  code *local_128;
  code *local_120;
  undefined1 *puStack_118;
  undefined1 auStack_110 [96];
  code *local_b0;
  code *local_a8;
  code *local_a0;
  undefined1 *local_98;
  long alStack_90 [12];
  
  *(undefined1 *)(param_1 + 0x73e) = 1;
  local_b0 = FUN__text__00275610;
  local_a8 = FUN__text__00275644;
  local_98 = &LAB__text__00275654;
  local_a0 = FUN__text__00275648;
  alStack_90[0] = param_1;
  FUN__text__0012c820(param_1 + 0x110,0x70ac84);
  local_130 = (code *)0x0;
  local_128 = (code *)0x0;
  local_120 = (code *)0x0;
  puStack_118 = (undefined1 *)0x0;
  if (local_a0 != (code *)0x0) {
    (*local_a0)(alStack_90,auStack_110);
    local_130 = local_b0;
    local_128 = local_a8;
    local_120 = local_a0;
    puStack_118 = local_98;
  }
  FUN__text__0012c3b0(param_1 + 0x110,0x713a5f,&local_130);
  pcVar1 = local_128;
  if (local_128 != (code *)0x0) {
    local_120 = (code *)0x0;
    puStack_118 = (undefined1 *)0x0;
    local_130 = (code *)0x0;
    local_128 = (code *)0x0;
    (*pcVar1)(auStack_110);
  }
  pcVar1 = local_a8;
  if (local_a8 != (code *)0x0) {
    local_a0 = (code *)0x0;
    local_98 = (undefined1 *)0x0;
    local_b0 = (code *)0x0;
    local_a8 = (code *)0x0;
    (*pcVar1)(alStack_90);
  }
  return;
}


