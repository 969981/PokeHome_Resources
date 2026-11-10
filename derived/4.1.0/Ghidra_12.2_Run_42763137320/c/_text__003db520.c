/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003db520; name: FUN_.text__003db520
 */


void FUN__text__003db520(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        ,undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8
                        )

{
  undefined1 auStack_80 [8];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined1 *local_50;
  undefined1 **ppuStack_48;
  undefined1 *puStack_40;
  undefined8 uStack_38;
  
  puStack_40 = auStack_80;
  ppuStack_48 = &local_50;
  uStack_38 = 0xffffff80ffffffd8;
  local_78 = param_4;
  uStack_70 = param_5;
  local_68 = param_6;
  uStack_60 = param_7;
  local_58 = param_8;
  local_50 = (undefined1 *)register0x00000008;
  FUN__text__003e5610(param_1,param_2,0x20,param_3,&local_50);
  return;
}


