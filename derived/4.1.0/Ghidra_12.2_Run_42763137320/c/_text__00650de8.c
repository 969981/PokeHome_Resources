/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00650de8; name: FUN_.text__00650de8
 */


void FUN__text__00650de8(undefined8 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_a0 [128];
  undefined4 local_4;
  
  uVar3 = *param_1;
  local_4 = 1;
  iVar1 = nnsocketSetSockOpt(param_2,0xffff,0x800,&local_4,4);
  if (iVar1 < 0) {
    memset(auStack_a0,0,0x80);
    uVar2 = nnsocketGetLastErrno();
    uVar2 = FUN__text__0066c474(uVar2,auStack_a0,0x80);
    FUN__text__00666f74(uVar3,0x70e836,uVar2);
  }
  return;
}


