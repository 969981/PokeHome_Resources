/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0045c360; name: FUN_.text__0045c360
 */


undefined4 FUN__text__0045c360(long param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [16];
  undefined1 *local_40;
  ulong local_38;
  undefined1 uStack_21;
  
  uVar3 = *(undefined8 *)(param_1 + 0x170);
  local_40 = (undefined1 *)0x0;
  local_38 = 0;
  puVar2 = (undefined8 *)FUN__text__0045c9e0(auStack_50,uVar3,&uStack_21);
  if (puVar2 == (undefined8 *)0x0) {
    uVar1 = 0;
  }
  else {
    *puVar2 = uVar3;
    uVar1 = FUN__text__0047a320(*(undefined8 *)(*(long *)(param_1 + 0x150) + 8),auStack_50,0);
  }
  if ((local_40 == (undefined1 *)0x0) ||
     (local_38 = local_38 & 0xffffffff00000000, local_40 == auStack_50)) {
    return uVar1;
  }
  FUN__text__00400fc0(4);
  return uVar1;
}


