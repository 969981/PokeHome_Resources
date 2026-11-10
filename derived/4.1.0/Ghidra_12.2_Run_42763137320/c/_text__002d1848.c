/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002d1848; name: FUN_.text__002d1848
 */


void FUN__text__002d1848(undefined8 param_1,undefined8 param_2,undefined4 param_3,byte param_4)

{
  int iVar1;
  ulong uVar2;
  undefined2 local_44;
  undefined2 local_42;
  undefined4 local_40;
  byte local_3c;
  byte local_3b;
  undefined1 local_3a;
  undefined1 local_39;
  undefined4 local_38;
  undefined4 uStack_34;
  
  uVar2 = FUN__text__00631174(param_2);
  if ((uVar2 & 1) != 0) {
    return;
  }
  FUN__text__00631008(param_2);
  local_44 = FUN__text__005fdb18();
  local_42 = FUN__text__00631010(param_2);
  local_40 = FUN__text__0063378c(param_2);
  local_3c = FUN__text__00634538(param_2);
  local_3c = local_3c & 1;
  local_3b = param_4 & 1;
  local_3a = FUN__text__00635e94(param_2);
  uVar2 = FUN__text__00631174(param_2);
  if (((uVar2 & 1) == 0) && (iVar1 = FUN__text__00631008(param_2), iVar1 == 0x365)) {
    local_39 = FUN__text__00631324(param_2);
    iVar1 = FUN__text__006312d0(param_2);
  }
  else {
    local_39 = 0;
    iVar1 = FUN__text__006312d0(param_2);
  }
  if (iVar1 - 1U < 0xb) {
    local_38 = *(undefined4 *)((long)(int)(iVar1 - 1U) * 4 + 0x7338e4);
  }
  else {
    local_38 = 10;
  }
  uStack_34 = param_3;
  FUN__text__002d0940(param_1,&local_44);
  return;
}


