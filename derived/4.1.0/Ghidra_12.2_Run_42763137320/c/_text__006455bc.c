/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006455bc; name: FUN_.text__006455bc
 */


bool FUN__text__006455bc(undefined8 param_1,undefined4 param_2)

{
  ushort uVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar3 = FUN__text__00631008();
  uVar4 = FUN__text__00631010(param_1);
  uVar1 = FUN__text__00632408(param_1);
  sVar2 = FUN__text__005ffe70(uVar3,uVar4,param_2,7);
  return (ushort)(sVar2 - 1U) < (uVar1 & 0xff);
}


