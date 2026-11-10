/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005C0D80
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006c0d80; name: FUN_.text__006c0d80
 */


int FUN__text__006c0d80(int *param_1,int param_2,ulong param_3,void *param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  ulong uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  iVar4 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (iVar4 != 0) { // [自动静态注释] 条件判断/分支
    iVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1 = param_1 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      uVar1 = (ulong)(uint)param_1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((*param_1 == param_2 && uVar1 == param_3) && // [自动静态注释] 条件判断/分支
         (iVar2 = memcmp(param_1 + 2,param_4,uVar1 * 4), iVar2 == 0)) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        return iVar3; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      param_1 = param_1 + 2 + uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      iVar3 = iVar3 + 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      iVar4 = iVar4 + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (iVar4 != 0); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  return -1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


