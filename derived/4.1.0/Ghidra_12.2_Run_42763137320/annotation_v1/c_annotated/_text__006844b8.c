/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005844B8
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006844b8; name: FUN_.text__006844b8
 */


int FUN__text__006844b8(long param_1,undefined8 *param_2,undefined8 param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar5 = *(long *)(param_1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar3 = *(long *)(lVar5 + 0x18) + 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(lVar5 + 0x18) = lVar3;
  *(long *)(lVar5 + 0x20) = lVar3;
  iVar2 = FUN__text__00680e2c(param_3,param_1,param_2[3],param_2[4]); // [自动静态注释] 调用尚未恢复正式名称的函数
  iVar1 = -0x20b; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (iVar2 != -0x1f6) { // [自动静态注释] 条件判断/分支
    iVar1 = iVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  lVar3 = *(long *)(lVar5 + 0x18) + -4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(lVar5 + 0x18) = lVar3;
  if (iVar1 == 0) { // [自动静态注释] 条件判断/分支
    FUN__text__0067999c(lVar3,*(undefined4 *)(param_2 + 5)); // [自动静态注释] 调用尚未恢复正式名称的函数
    param_2[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar4 = FUN__text__006834c0(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
    *param_2 = uVar4;
    FUN__text__0068408c(param_1,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  return iVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


