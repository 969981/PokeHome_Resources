/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0029b7e0; name: FUN_.text__0029b7e0
 */


void FUN__text__0029b7e0(long param_1,ulong param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 local_28;
  
  lVar1 = param_1 + 0x110;
  uVar2 = *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x950) + 0xe0) + (param_2 & 0xffffffff) * 8)
  ;
  *(undefined8 *)(param_1 + 0x870) = 0xa11502d25cbfe4f4;
  *(char *)(param_1 + 0x879) = (char)uVar2;
  FUN__text__0012bca0(lVar1,0);
  *(undefined1 *)(param_1 + 0x868) = 1;
  local_28 = 0x431e769ffc1ad350;
  uVar3 = FUN__text__0012ce7c(lVar1,&local_28);
  FUN__text__003a14e8(uVar3,0);
  local_28 = 0x431e779ffc1ad503;
  uVar3 = FUN__text__0012ce7c(lVar1,&local_28);
  FUN__text__003a14e8(uVar3,0);
  return;
}


