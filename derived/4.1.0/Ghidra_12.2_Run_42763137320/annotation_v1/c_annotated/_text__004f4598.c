/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003F4598
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004f4598; name: FUN_.text__004f4598
 */


void FUN__text__004f4598(long param_1,long param_2,int param_3,undefined4 param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                        undefined4 *param_5,int *param_6) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  char cVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *param_6 = param_3;
  *param_5 = 0;
  cVar1 = *(char *)(param_2 + 0x14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = (uint)(int)cVar1 >> 3 & 7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar2 == 3) { // [自动静态注释] 条件判断/分支
    if (-1 < cVar1) { // [自动静态注释] 条件判断/分支
      param_4 = *(undefined4 *)(param_2 + 0xc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    iVar3 = FUN__text__004f4650((int)param_1,*param_6,param_4,1); // [自动静态注释] 调用尚未恢复正式名称的函数
    *param_6 = iVar3;
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  if (uVar2 == 2) { // [自动静态注释] 条件判断/分支
    if (-1 < cVar1) { // [自动静态注释] 条件判断/分支
      param_4 = *(undefined4 *)(param_2 + 0xc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    iVar3 = FUN__text__004f4650((int)param_1,*param_6,param_4,0); // [自动静态注释] 调用尚未恢复正式名称的函数
    *param_6 = iVar3;
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  if ((uVar2 == 0) && (param_3 == 0)) { // [自动静态注释] 条件判断/分支
    *param_5 = **(undefined4 **)(param_1 + 0x128);
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


