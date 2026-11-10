/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00661e0c; name: FUN_.text__00661e0c
 */


undefined8 FUN__text__00661e0c(long *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_38;
  
  lVar5 = *(long *)(*param_1 + 0x1e8);
  *(undefined4 *)(lVar5 + 0x218) = 0xffffffff;
  if (*(long *)(lVar5 + 0x220) == 0) {
    lVar3 = FUN__text__0065fd58();
    *(long *)(lVar5 + 0x220) = lVar3;
    if (lVar3 == 0) {
      return 0x1b;
    }
  }
  lVar3 = param_1[0x84];
  if (lVar3 == 0x899f78) {
    return 0;
  }
  if (lVar3 == 0x89a000) {
    return 0;
  }
  lVar1 = 0x89a000;
  if ((*(uint *)(lVar3 + 0x84) & 1) != 0) {
    lVar1 = 0x899f78;
  }
  param_1[0x84] = lVar1;
  if (param_1[0xaa] != 0) {
LAB__text__00661e8c:
    FUN__text__00666f74(*param_1,0x712042);
    *(undefined8 *)(lVar5 + 0x280) = 0;
    *(undefined8 *)(lVar5 + 0x278) = 0;
    *(undefined8 *)(lVar5 + 0x270) = 0;
    param_1[0xbc] = 0;
    param_1[0xb9] = 0;
    param_1[0xba] = 0;
    *(undefined4 *)(param_1 + 0xbb) = 0;
    *(uint *)((long)param_1 + 0x3fc) = *(uint *)((long)param_1 + 0x3fc) | 0x4000000;
    *(undefined4 *)(param_1 + 0x46) = 0x14;
    *(undefined4 *)param_1[0xcc] = 2;
    FUN__text__00666f74(*param_1,0x718dbe);
    *(undefined1 *)(*(long *)(*param_1 + 0xd8) + 0xf0) = 1;
    return 0;
  }
  local_38 = 0;
  lVar3 = FUN__text__006783d4(0x8000);
  param_1[0xb8] = lVar3;
  if (lVar3 != 0) {
    iVar2 = FUN__text__00679900(&local_38);
    if (iVar2 == 0) {
      FUN__text__0067993c(local_38,FUN__text__0066307c);
      FUN__text__00679944(local_38,FUN__text__006630f0);
      FUN__text__0067994c(local_38,FUN__text__006634bc);
      FUN__text__00679954(local_38,FUN__text__006635c4);
      FUN__text__0067995c(local_38,FUN__text__00663688);
      FUN__text__00679964(local_38,&LAB__text__006636ec);
      FUN__text__0067996c(local_38,FUN__text__00663a50);
      iVar2 = FUN__text__00679fb4(param_1 + 0xaa,local_38,param_1);
      thunk_FUN__text__006783e4(local_38);
      if (iVar2 == 0) goto LAB__text__00661e8c;
      uVar4 = 0x70e980;
    }
    else {
      uVar4 = 0x71bc43;
    }
    FUN__text__0066713c(*param_1,uVar4);
  }
  FUN__text__0065fd64((long *)(lVar5 + 0x220));
  return 0x1b;
}


