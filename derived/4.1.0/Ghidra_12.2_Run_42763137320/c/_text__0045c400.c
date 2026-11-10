/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0045c400; name: FUN_.text__0045c400
 */


undefined8 FUN__text__0045c400(long param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [16];
  undefined1 *local_50;
  ulong local_48;
  undefined1 uStack_31;
  
  uVar4 = *(undefined8 *)(param_1 + 0x170);
  local_50 = (undefined1 *)0x0;
  local_48 = 0;
  puVar2 = (undefined8 *)FUN__text__0045c9e0(auStack_60,uVar4,&uStack_31);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = uVar4;
    puVar2 = (undefined8 *)
             FUN__text__0047a430(*(undefined8 *)(*(long *)(param_1 + 0x150) + 8),auStack_60,0,
                                 param_2);
    if (puVar2 != (undefined8 *)0x0) {
      uVar4 = *puVar2;
      uVar3 = puVar2[2];
      param_3[1] = puVar2[1];
      param_3[2] = uVar3;
      *param_3 = uVar4;
      uVar4 = puVar2[3];
      uVar3 = puVar2[4];
      uVar1 = puVar2[6];
      param_3[5] = puVar2[5];
      param_3[6] = uVar1;
      param_3[3] = uVar4;
      param_3[4] = uVar3;
      uVar4 = puVar2[7];
      uVar3 = puVar2[8];
      uVar1 = puVar2[10];
      param_3[9] = puVar2[9];
      param_3[10] = uVar1;
      param_3[7] = uVar4;
      param_3[8] = uVar3;
      uVar4 = puVar2[0xb];
      uVar3 = puVar2[0xc];
      uVar1 = puVar2[0xe];
      param_3[0xd] = puVar2[0xd];
      param_3[0xe] = uVar1;
      param_3[0xb] = uVar4;
      param_3[0xc] = uVar3;
      uVar4 = 1;
      goto joined_r0x0045c4b4;
    }
  }
  uVar4 = 2;
joined_r0x0045c4b4:
  if ((local_50 == (undefined1 *)0x0) ||
     (local_48 = local_48 & 0xffffffff00000000, local_50 == auStack_60)) {
    return uVar4;
  }
  FUN__text__00400fc0(4);
  return uVar4;
}


