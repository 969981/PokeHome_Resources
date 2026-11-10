/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005EA228
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006ea228; name: FUN_.text__006ea228
 */


undefined8 // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
FUN__text__006ea228(undefined4 *param_1,undefined8 param_2,long param_3,undefined4 param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *param_1 = 0;
  param_1[1] = param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_40 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_38 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__006ebbe4(&local_40); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_40 = CONCAT44(0x10,(undefined4)local_40); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar1 = FUN__text__006ec37c(param_2,&local_40); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(ulong *)(param_1 + 10) = (param_3 + lVar1) - 1U & -lVar1;
  uVar2 = FUN__text__006d83b0(); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar3 = FUN__text__006eacd8(param_1 + 0xe,param_2,uVar2,0x10,*(undefined8 *)(param_1 + 10)); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar2 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((uVar3 & 1) != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__006ec64c(param_1 + 0xe,param_1 + 0x72); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar2 = FUN__text__006d83b0(); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar3 = FUN__text__006eacd8(param_1 + 0x7a,param_2,uVar2,0x10,*(undefined8 *)(param_1 + 10)); // [自动静态注释] 调用尚未恢复正式名称的函数
    if ((uVar3 & 1) == 0) { // [自动静态注释] 条件判断/分支
      return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    FUN__text__006ec64c(param_1 + 0x7a,param_1 + 0xde); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (param_1[1] == 3) { // [自动静态注释] 条件判断/分支
      uVar2 = FUN__text__006d83b0(); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar3 = FUN__text__006eacd8(param_1 + 0xe6,param_2,uVar2,0x10,*(undefined8 *)(param_1 + 10)); // [自动静态注释] 调用尚未恢复正式名称的函数
      if ((uVar3 & 1) == 0) { // [自动静态注释] 条件判断/分支
        return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      FUN__text__006ec64c(param_1 + 0xe6,param_1 + 0x14a); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    uVar2 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined1 *)(param_1 + 0xc) = 1;
  } // [自动静态注释] 作用域/控制流边界
  return uVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


