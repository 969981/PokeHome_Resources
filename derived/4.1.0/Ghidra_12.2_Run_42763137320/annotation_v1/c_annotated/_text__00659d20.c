/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00559D20
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00659d20; name: FUN_.text__00659d20
 */


undefined8 * FUN__text__00659d20(undefined4 param_1,undefined4 param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  puVar2 = (undefined8 *)FUN__text__00678414(1,0x1e8); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (puVar2 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    *puVar2 = 0xbab1e;
    iVar1 = FUN__text__00654c1c(puVar2 + 0x10); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (((iVar1 == 0) && // [自动静态注释] 条件判断/分支
        (iVar1 = FUN__text__00653dc4(puVar2 + 0x17,param_1,&LAB__text__0065cad0,&LAB__text__0065cae0 // [自动静态注释] 调用尚未恢复正式名称的函数
                                     ,&LAB__text__0065caf4), iVar1 == 0)) && // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
       (iVar1 = FUN__text__00650e64(puVar2 + 0x1f,param_2), iVar1 == 0)) { // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__00656b14(puVar2 + 4,&DAT__text__00659e2c); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__00656b14(puVar2 + 8,&DAT__text__00659e2c); // [自动静态注释] 调用尚未恢复正式名称的函数
      puVar2[0x2d] = 5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar2[0x1d] = 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar2[0x2a] = 0xffffffffffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      FUN__text__006540c0(puVar2 + 0x17); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__006540c0(puVar2 + 0x10); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__00650ee0(puVar2 + 0x1f); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__00656c1c(puVar2 + 4,0); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__00656c1c(puVar2 + 8,0); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__006783e4(puVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
      puVar2 = (undefined8 *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return puVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


