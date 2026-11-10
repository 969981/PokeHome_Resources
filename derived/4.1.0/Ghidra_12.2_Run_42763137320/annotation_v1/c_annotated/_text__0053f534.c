/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0043F534
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0053f534; name: FUN_.text__0053f534
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN__text__0053f534(long *param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auVar5 [16]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_30; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_24; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar3 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(lVar3 + 0x148) = param_2;
  FUN__text__0053f644(lVar3,param_2 + 0x10); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_28 = 0.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar3 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_38 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_30 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar4 = *(long *)(param_2 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_48 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_40 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((*_DAT_008a3fc0 & 1) == 0) { // [自动静态注释] 条件判断/分支
    iVar2 = __cxa_guard_acquire(_DAT_008a3fc0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar1 = _DAT_008a3fc8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (iVar2 != 0) { // [自动静态注释] 条件判断/分支
      auVar5 = NEON_fmov(0x3f800000,4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      _DAT_008a3fc8[1] = auVar5._8_8_; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *puVar1 = auVar5._0_8_;
      __cxa_guard_release(_DAT_008a3fc0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  local_38 = *(undefined8 *)(lVar3 + 0x114); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_40 = CONCAT44(*(float *)(lVar3 + 0x110),*(undefined4 *)(lVar3 + 0x108)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_48 = *(undefined8 *)(lVar3 + 0x100); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_24 = 0x3f800000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_30 = CONCAT44(1.0 / *(float *)(lVar3 + 0x114),1.0 / *(float *)(lVar3 + 0x110)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_28 = 1.0 / *(float *)(lVar3 + 0x118); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__0053f770(lVar4 + 0x30,*(undefined8 *)(lVar4 + 0x38),&local_48,lVar3,&local_24); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar3 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(int *)(lVar3 + 0x150) != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__0053fb5c(lVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined4 *)(lVar3 + 0x150) = 0;
  } // [自动静态注释] 作用域/控制流边界
  return *(char *)(lVar3 + 0x159) == '\0'; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


