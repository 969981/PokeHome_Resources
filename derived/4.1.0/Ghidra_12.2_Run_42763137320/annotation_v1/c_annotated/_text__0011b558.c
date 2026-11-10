/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0001B558
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0011b558; name: FUN_.text__0011b558
 */


/* WARNING: Removing unreachable block (ram,0x0011b5bc) */

void FUN__text__0011b558(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char *pcVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char *pcVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  TouchScreenState aTStack_68 [8]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int local_60; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uStack_44; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  pcVar6 = (char *)(param_1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = *(undefined8 *)pcVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *pcVar6 = '\0';
  pcVar5 = (char *)(param_1 + 0x14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)pcVar5 = uVar3;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x10);
  nn::hid::GetTouchScreenState<1ul>(aTStack_68); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (local_60 < 1) { // [自动静态注释] 条件判断/分支
    cVar2 = *pcVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    cVar4 = *pcVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (cVar2 == '\0') goto LAB__text__0011b5f0; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    cVar2 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined1 *)(param_1 + 8) = 1;
    *(undefined4 *)(param_1 + 0xc) = local_48;
    *(undefined4 *)(param_1 + 0x10) = uStack_44;
    cVar4 = *pcVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (cVar4 == '\0') { // [自动静态注释] 条件判断/分支
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x10);
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
LAB__text__0011b5f0: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if ((cVar2 == '\0') && (cVar4 != '\0')) { // [自动静态注释] 条件判断/分支
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x1c);
  } // [自动静态注释] 作用域/控制流边界
  else if ((cVar2 != '\0') && (cVar4 != '\0')) { // [自动静态注释] 条件判断/分支
    iVar1 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(int *)(param_1 + 0x30) < 9) { // [自动静态注释] 条件判断/分支
      iVar1 = *(int *)(param_1 + 0x30) + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    *(int *)(param_1 + 0x30) = iVar1;
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  *(undefined4 *)(param_1 + 0x30) = 0;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


