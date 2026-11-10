/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0056FA80
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0066fa80; name: FUN_.text__0066fa80
 */


undefined8 // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
FUN__text__0066fa80(undefined8 param_1,undefined8 param_2,int param_3,undefined4 *param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  local_8 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (-1 < param_3) { // [自动静态注释] 条件判断/分支
    local_28 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar1 = FUN__text__0066fafc(param_1,param_2,param_3,&local_8,&local_28,0); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (iVar1 == 0) { // [自动静态注释] 条件判断/分支
      if (param_4 != (undefined4 *)0x0) { // [自动静态注释] 条件判断/分支
        if (local_28 >> 0x1f == 0) { // [自动静态注释] 条件判断/分支
          uVar2 = FUN__text__00678264(); // [自动静态注释] 调用尚未恢复正式名称的函数
          *param_4 = uVar2;
        } // [自动静态注释] 作用域/控制流边界
        else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          FUN__text__006783e4(local_8); // [自动静态注释] 调用尚未恢复正式名称的函数
          local_8 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
      return local_8; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


