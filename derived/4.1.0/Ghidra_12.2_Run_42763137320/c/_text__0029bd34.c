/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0029bd34; name: FUN_.text__0029bd34
 */


void FUN__text__0029bd34(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  code *local_130;
  code *local_128;
  undefined1 *local_120;
  undefined1 *puStack_118;
  long local_110 [12];
  code *local_b0;
  code *local_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  long local_90 [12];
  undefined8 local_18;
  
  lVar1 = param_1 + 0x110;
  local_18 = 0x431e769ffc1ad350;
  uVar2 = FUN__text__0012ce7c(lVar1,&local_18);
  FUN__text__003a14e8(uVar2,0);
  local_18 = 0x431e779ffc1ad503;
  uVar2 = FUN__text__0012ce7c(lVar1,&local_18);
  FUN__text__003a14e8(uVar2,0);
  lVar3 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x7325b8);
  *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) | 1;
  lVar3 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x7325c0);
  *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) | 1;
  if (*(int *)(param_1 + 0x940) == 1) {
    *(undefined4 *)(param_1 + 0x940) = 0;
    local_130 = FUN__text__0029d7e8;
    local_128 = FUN__text__0029d8ac;
    local_120 = &LAB__text__0029d8b0;
    puStack_118 = &LAB__text__0029d8bc;
    local_110[0] = param_1;
    FUN__text__0012c3b0(lVar1,0x71e66d,&local_130);
    pcVar5 = local_128;
    if (local_128 == (code *)0x0) {
      return;
    }
    plVar4 = local_110;
    local_120 = (undefined1 *)0x0;
    puStack_118 = (undefined1 *)0x0;
    local_130 = (code *)0x0;
    local_128 = (code *)0x0;
  }
  else {
    if (*(int *)(param_1 + 0x940) != 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x940) = 1;
    local_b0 = FUN__text__0029d7e8;
    local_a8 = FUN__text__0029d8ac;
    local_a0 = &LAB__text__0029d8b0;
    puStack_98 = &LAB__text__0029d8bc;
    local_90[0] = param_1;
    FUN__text__0012c3b0(lVar1,0x716a76,&local_b0);
    pcVar5 = local_a8;
    if (local_a8 == (code *)0x0) {
      return;
    }
    plVar4 = local_90;
    local_a0 = (undefined1 *)0x0;
    puStack_98 = (undefined1 *)0x0;
    local_b0 = (code *)0x0;
    local_a8 = (code *)0x0;
  }
  (*pcVar5)(plVar4);
  return;
}


