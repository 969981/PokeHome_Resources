/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006bb5a0; name: FUN_.text__006bb5a0
 */


void FUN__text__006bb5a0(long param_1,long param_2,undefined8 param_3,long param_4,long param_5)

{
  long *plVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 uVar5;
  long lVar6;
  long local_50;
  long lStack_48;
  
  FUN__text__0069db40(param_3,param_2,*(undefined8 *)(param_1 + 0xd8));
  FUN__text__006af484(*(undefined8 *)(param_1 + 0xd8),param_2,param_3);
  uVar2 = *(byte *)(param_4 + 10) - 1;
  if (uVar2 < 3) {
    uVar5 = *(undefined4 *)((long)(char)uVar2 * 4 + 0x766464);
  }
  else {
    uVar5 = 0;
  }
  uVar3 = FUN__text__006d5724(*(undefined8 *)(param_2 + 0xb8),uVar5);
  FUN__text__006d6610(param_3,param_2,uVar3);
  plVar1 = (long *)(*(long *)(*(long *)(param_2 + 200) + 0x10) +
                   (long)*(int *)(*(long *)(param_2 + 200) + 0x30) * 0x10);
  lStack_48 = plVar1[1];
  local_50 = *plVar1 + (long)*(int *)(param_5 + 0xc);
  lVar4 = FUN__text__006b4514(param_1);
  lVar6 = *(long *)(lVar4 + 0x20);
  lVar4 = FUN__text__006b4514(param_1);
  FUN__text__006ee1d4(param_3,*(undefined4 *)
                               (*(long *)(lVar6 + 0x18) + (ulong)*(ushort *)(lVar4 + 0x4a) * 4),0,
                      &local_50,0x230);
  plVar1 = (long *)(*(long *)(*(long *)(param_2 + 200) + 0x10) +
                   (long)*(int *)(*(long *)(param_2 + 200) + 0x30) * 0x10);
  lStack_48 = plVar1[1];
  local_50 = *plVar1 + (long)*(int *)(param_5 + 0x10);
  FUN__text__006ee1d4(param_3,*(undefined4 *)(param_5 + 4),4,&local_50,0x120);
  FUN__text__0069dbb0(param_3,param_2);
  uVar3 = FUN__text__006b4514(param_1);
  FUN__text__006b0efc(uVar3,param_3,param_2);
  uVar3 = FUN__text__006b4514(param_1);
  FUN__text__006b0b84(uVar3,param_3,param_2);
  return;
}


