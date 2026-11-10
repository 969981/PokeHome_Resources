/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003BEB3C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004beb3c; name: FUN_.text__004beb3c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN__text__004beb3c(long *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  iVar3 = FUN__text__00473c80(); // [自动静态注释] 调用尚未恢复正式名称的函数
  puVar1 = _DAT_008a4648; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (iVar3 != 1) { // [自动静态注释] 条件判断/分支
    return iVar3; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  if (param_1[0x51] == 0) { // [自动静态注释] 条件判断/分支
LAB__text__004beb9c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar4 = param_1[0x52]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    iVar3 = FUN__text__0042f400(*_DAT_008a4648,param_1[0x51],param_1 + 2); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (iVar3 == 1) { // [自动静态注释] 条件判断/分支
      (**(code **)(*param_1 + 0xb8))(param_1,0xe,0xffffffff); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      goto LAB__text__004beb9c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    param_1[0x51] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(byte *)((long)param_1 + 0x312) = *(byte *)((long)param_1 + 0x312) & 0xf8 | 2;
    lVar4 = param_1[0x52]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (lVar4 != 0) { // [自动静态注释] 条件判断/分支
    iVar3 = FUN__text__0042f400(*puVar1,lVar4,param_1 + 2); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (iVar3 == 1) { // [自动静态注释] 条件判断/分支
      (**(code **)(*param_1 + 0xb8))(param_1,0xe,0xffffffff); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      bVar2 = param_1[0x52] == 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      goto LAB__text__004bec08; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    param_1[0x52] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  bVar2 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__004bec08: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if ((((*(byte *)((long)param_1 + 0x312) & 7) == 0) && (*(int *)((long)param_1 + 0x32c) != 0)) && // [自动静态注释] 条件判断/分支
     (bVar2)) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(byte *)((long)param_1 + 0x312) = *(byte *)((long)param_1 + 0x312) & 0xf8 | 1;
  } // [自动静态注释] 作用域/控制流边界
  return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


