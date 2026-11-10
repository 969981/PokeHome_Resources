/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006635c4; name: FUN_.text__006635c4
 */


undefined8 FUN__text__006635c4(undefined8 param_1,int param_2,undefined4 param_3,long param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (param_2 == 0) {
    return 0;
  }
  lVar2 = FUN__text__0067fd24();
  uVar3 = 0;
  if (lVar2 != 0) {
    lVar4 = *(long *)(lVar2 + 0x1e8);
    if (lVar4 == 0) {
      uVar3 = 0xfffffc7a;
    }
    else {
      *(undefined1 *)(lVar4 + 0x250) = 1;
      *(long *)(lVar2 + 0x1520) = *(long *)(lVar2 + 0x1520) + 1;
      *(undefined4 *)(param_4 + 0x610) = param_3;
      *(long *)(param_4 + 0x5e0) = *(long *)(param_4 + 0x5e0) + 1;
      iVar1 = FUN__text__0067fd5c(param_1,param_2,0);
      if (iVar1 != 0) {
        FUN__text__00666f74(lVar2,0x71afa9,param_2);
      }
      if (*(int *)(param_4 + 0x5d8) == param_2) {
        *(undefined4 *)(param_4 + 0x5d8) = 0;
      }
      uVar3 = 0;
      *(undefined4 *)(lVar4 + 0x218) = 0;
    }
  }
  return uVar3;
}


