/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0029d5d8; name: FUN_.text__0029d5d8
 */


void FUN__text__0029d5d8(long *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  code *local_b0;
  code *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  long alStack_90 [12];
  
  lVar3 = *param_1;
  local_b0 = (code *)0x431e769ffc1ad350;
  uVar2 = FUN__text__0012ce7c(lVar3 + 0x110,&local_b0);
  FUN__text__003a14e8(uVar2,0);
  local_b0 = (code *)0x431e779ffc1ad503;
  uVar2 = FUN__text__0012ce7c(lVar3 + 0x110,&local_b0);
  FUN__text__003a14e8(uVar2,0);
  alStack_90[0] = lVar3;
  if (*(int *)(lVar3 + 0x940) == 0) {
    local_b0 = FUN__text__0029d704;
    local_a8 = FUN__text__0029d7b4;
    local_a0 = &LAB__text__0029d7b8;
    local_98 = &LAB__text__0029d7c4;
    FUN__text__0028f338(lVar3,0,&local_b0);
    pcVar1 = local_a8;
  }
  else {
    local_b0 = FUN__text__0029d704;
    local_a8 = FUN__text__0029d7b4;
    local_a0 = &LAB__text__0029d7b8;
    local_98 = &LAB__text__0029d7c4;
    FUN__text__0028f338(lVar3,1,&local_b0);
    pcVar1 = local_a8;
  }
  if (pcVar1 != (code *)0x0) {
    local_a0 = (undefined1 *)0x0;
    local_98 = (undefined1 *)0x0;
    local_b0 = (code *)0x0;
    local_a8 = (code *)0x0;
    (*pcVar1)(alStack_90);
  }
  return;
}


