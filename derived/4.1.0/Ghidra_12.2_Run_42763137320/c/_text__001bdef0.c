/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001bdef0; name: FUN_.text__001bdef0
 */


void FUN__text__001bdef0(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  undefined4 local_68;
  int iStack_64;
  
  lVar3 = *(long *)(*(long *)(param_1 + 8) + 0x2d0);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  iVar5 = 0;
  lVar6 = 0;
  lVar1 = param_1 + 0x2030;
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x108);
  do {
    local_68 = 0;
    iStack_64 = iVar5;
    uVar2 = FUN__text__001c1e4c(uVar4,*(undefined4 *)(param_1 + 0x30),&local_68);
    if ((uVar2 & 1) != 0) {
      FUN__text__001c1e2c(uVar4,*(undefined4 *)(param_1 + 0x30),&local_68);
      FUN__text__003c7c60(lVar3,lVar1 + lVar6 + -3000,0);
    }
    local_68 = 1;
    iStack_64 = iVar5;
    uVar2 = FUN__text__001c1e4c(uVar4,*(undefined4 *)(param_1 + 0x30),&local_68);
    if ((uVar2 & 1) == 0) {
      local_68 = 2;
      iStack_64 = iVar5;
      uVar2 = FUN__text__001c1e4c(uVar4,*(undefined4 *)(param_1 + 0x30),&local_68);
      if ((uVar2 & 1) == 0) goto LAB__text__001bdfe0;
LAB__text__001be06c:
      FUN__text__001c1e2c(uVar4,*(undefined4 *)(param_1 + 0x30),&local_68);
      FUN__text__003c7c60(lVar3,lVar1 + lVar6 + -1000,0);
      local_68 = 3;
      iStack_64 = iVar5;
      uVar2 = FUN__text__001c1e4c(uVar4,*(undefined4 *)(param_1 + 0x30),&local_68);
      if ((uVar2 & 1) != 0) goto LAB__text__001be0a8;
LAB__text__001bdff8:
      local_68 = 4;
      iStack_64 = iVar5;
      uVar2 = FUN__text__001c1e4c(uVar4,*(undefined4 *)(param_1 + 0x30),&local_68);
      if ((uVar2 & 1) == 0) goto LAB__text__001be010;
LAB__text__001be0e0:
      FUN__text__001c1e2c(uVar4,*(undefined4 *)(param_1 + 0x30),&local_68);
      FUN__text__003c7c60(lVar3,lVar1 + lVar6 + 1000,0);
      local_68 = 5;
      iStack_64 = iVar5;
      uVar2 = FUN__text__001c1e4c(uVar4,*(undefined4 *)(param_1 + 0x30),&local_68);
    }
    else {
      FUN__text__001c1e2c(uVar4,*(undefined4 *)(param_1 + 0x30),&local_68);
      FUN__text__003c7c60(lVar3,lVar1 + lVar6 + -2000,0);
      local_68 = 2;
      iStack_64 = iVar5;
      uVar2 = FUN__text__001c1e4c(uVar4,*(undefined4 *)(param_1 + 0x30),&local_68);
      if ((uVar2 & 1) != 0) goto LAB__text__001be06c;
LAB__text__001bdfe0:
      local_68 = 3;
      iStack_64 = iVar5;
      uVar2 = FUN__text__001c1e4c(uVar4,*(undefined4 *)(param_1 + 0x30),&local_68);
      if ((uVar2 & 1) == 0) goto LAB__text__001bdff8;
LAB__text__001be0a8:
      FUN__text__001c1e2c(uVar4,*(undefined4 *)(param_1 + 0x30),&local_68);
      FUN__text__003c7c60(lVar3,lVar1 + lVar6,0);
      local_68 = 4;
      iStack_64 = iVar5;
      uVar2 = FUN__text__001c1e4c(uVar4,*(undefined4 *)(param_1 + 0x30),&local_68);
      if ((uVar2 & 1) != 0) goto LAB__text__001be0e0;
LAB__text__001be010:
      local_68 = 5;
      iStack_64 = iVar5;
      uVar2 = FUN__text__001c1e4c(uVar4,*(undefined4 *)(param_1 + 0x30),&local_68);
    }
    if ((uVar2 & 1) != 0) {
      FUN__text__001c1e2c(uVar4,*(undefined4 *)(param_1 + 0x30),&local_68);
      FUN__text__003c7c60(lVar3,lVar1 + lVar6 + 2000,0);
    }
    lVar6 = lVar6 + 200;
    iVar5 = iVar5 + 1;
    if (lVar6 == 1000) {
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
      }
      return;
    }
  } while( true );
}


