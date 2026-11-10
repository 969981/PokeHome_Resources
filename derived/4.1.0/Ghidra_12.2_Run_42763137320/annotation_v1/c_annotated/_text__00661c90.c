/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00561C90
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00661c90; name: FUN_.text__00661c90
 */


undefined4 FUN__text__00661c90(long *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined4 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_24; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  local_24 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (param_1[0x84] == 0x899f78 || param_1[0x84] == 0x89a000) { // [自动静态注释] 条件判断/分支
    lVar3 = *(long *)(*param_1 + 0x1e8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(long *)(lVar3 + 0x280) == 0) { // [自动静态注释] 条件判断/分支
      uVar1 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      lVar2 = param_1[0xaa]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 *)(lVar3 + 0x280) = 0;
      FUN__text__0067fe0c(lVar2,*(undefined4 *)(lVar3 + 0x218)); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__00661d1c(param_1,param_1 + 0xaa,&local_24); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar1 = local_24; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return uVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


