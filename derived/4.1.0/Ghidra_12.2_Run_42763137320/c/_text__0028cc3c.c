/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0028cc3c; name: FUN_.text__0028cc3c
 */


void FUN__text__0028cc3c(long *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  code *local_a0;
  code *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  long alStack_80 [12];
  
  lVar3 = *param_1;
  local_a0 = (code *)0x431e769ffc1ad350;
  uVar2 = FUN__text__0012ce7c(lVar3 + 0x110,&local_a0);
  FUN__text__003a14e8(uVar2,0);
  local_a0 = FUN__text__0028cce4;
  local_98 = FUN__text__0028cd28;
  local_90 = &LAB__text__0028cd2c;
  local_88 = &LAB__text__0028cd38;
  alStack_80[0] = lVar3;
  FUN__text__0028f338(lVar3,2,&local_a0);
  pcVar1 = local_98;
  if (local_98 != (code *)0x0) {
    local_90 = (undefined1 *)0x0;
    local_88 = (undefined1 *)0x0;
    local_a0 = (code *)0x0;
    local_98 = (code *)0x0;
    (*pcVar1)(alStack_80);
  }
  return;
}


