/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f60bc; name: FUN_.text__005f60bc
 */


undefined8
FUN__text__005f60bc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar2 = FUN__text__005f59ec(param_2,param_4);
  if (uVar2 == 0) {
    uVar2 = FUN__text__005f5bcc(param_2,param_3);
    if ((uVar2 & 1) == 0) {
      FUN__text__005f6664(param_1,param_2);
      return param_2;
    }
    FUN__text__005f6664(param_1,param_2);
    uVar4 = FUN__text__005f5b08(param_2,param_3);
    FUN__text__005f5df8(param_1,uVar4);
    FUN__text__005f5c08(param_2,1);
    return param_2;
  }
  uVar3 = FUN__text__005f598c(param_2);
  uVar1 = uVar2 + param_3;
  if (uVar3 < uVar1) {
    return 0;
  }
  uVar3 = FUN__text__005f5bcc(param_2,uVar1);
  if ((uVar3 & 1) != 0) {
    FUN__text__005f6664(param_1,param_2);
    uVar4 = FUN__text__005f5b08(param_2,uVar1);
    FUN__text__005f5df8(param_1,uVar4);
    FUN__text__005f5c08(param_2,1);
  }
  if (uVar2 < 0x100) {
    FUN__text__005f6664(param_1,param_2);
    FUN__text__005f5a08(param_2,param_4);
    return param_2;
  }
  FUN__text__005f6664(param_1,param_2);
  uVar4 = FUN__text__005f5b08(param_2,uVar2 - 0x18);
  FUN__text__005f5df8(param_1,param_2);
  FUN__text__005f5c08(uVar4,1);
  return uVar4;
}


