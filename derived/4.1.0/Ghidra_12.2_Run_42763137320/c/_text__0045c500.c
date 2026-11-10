/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0045c500; name: FUN_.text__0045c500
 */


float FUN__text__0045c500(long param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  undefined1 auStack_60 [16];
  undefined1 *local_50;
  ulong local_48;
  undefined1 uStack_31;
  
  uVar4 = *(undefined8 *)(param_1 + 0x170);
  local_50 = (undefined1 *)0x0;
  local_48 = 0;
  puVar1 = (undefined8 *)FUN__text__0045c9e0(auStack_60,uVar4,&uStack_31);
  if (puVar1 == (undefined8 *)0x0) {
    fVar5 = 2.0;
  }
  else {
    *puVar1 = uVar4;
    lVar2 = FUN__text__0047a430(*(undefined8 *)(*(long *)(param_1 + 0x150) + 8),auStack_60,0,param_2
                               );
    fVar5 = 0.0;
    if ((lVar2 != 0) && (lVar3 = FUN__text__0047d7d0(*(undefined8 *)(param_1 + 0x170)), lVar3 != 0))
    {
      FUN__text__00481048(lVar3,lVar2);
      fVar5 = (float)FUN__text__004791f8(*(undefined8 *)(*(long *)(param_1 + 0x150) + 8));
      fVar5 = fVar5 * 0.01;
    }
  }
  if ((local_50 != (undefined1 *)0x0) &&
     (local_48 = local_48 & 0xffffffff00000000, local_50 != auStack_60)) {
    FUN__text__00400fc0(4);
  }
  return fVar5;
}


