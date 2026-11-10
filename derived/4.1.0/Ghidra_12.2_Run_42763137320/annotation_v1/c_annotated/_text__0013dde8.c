/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0003DDE8
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0013dde8; name: FUN_.text__0013dde8
 */


void FUN__text__0013dde8(long param_1,uint param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(int *)(param_1 + 0x64c) == 1) { // [自动静态注释] 条件判断/分支
    local_28 = *(undefined8 *)((ulong)param_2 * 8 + 0x724140); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar1 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),&local_28); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (lVar1 == 0) goto LAB__text__0013e068; // [自动静态注释] 条件判断/分支
    uVar4 = (ulong)param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
    local_28 = *(undefined8 *)(uVar4 * 8 + 0x724178); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar1 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),&local_28); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (lVar1 == 0) goto LAB__text__0013e068; // [自动静态注释] 条件判断/分支
    *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
    local_28 = *(undefined8 *)(uVar4 * 8 + 0x7241b0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar1 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),&local_28); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (lVar1 == 0) goto LAB__text__0013e068; // [自动静态注释] 条件判断/分支
    *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
    local_28 = *(undefined8 *)(uVar4 * 8 + 0x723ab8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar1 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),&local_28); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (lVar1 == 0) goto LAB__text__0013e068; // [自动静态注释] 条件判断/分支
    *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
    local_28 = *(undefined8 *)(uVar4 * 8 + 0x724258); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar1 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),&local_28); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (lVar1 == 0) goto LAB__text__0013e068; // [自动静态注释] 条件判断/分支
    *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
    local_28 = *(undefined8 *)(uVar4 * 8 + 0x7241e8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar1 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),&local_28); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (lVar1 == 0) goto LAB__text__0013e068; // [自动静态注释] 条件判断/分支
    bVar2 = *(byte *)(lVar1 + 0x58); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar3 = 0x724290; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (*(int *)(param_1 + 0x64c) != 0) { // [自动静态注释] 条件判断/分支
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    local_28 = *(undefined8 *)((ulong)param_2 * 8 + 0x723d90); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar1 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),&local_28); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (lVar1 == 0) goto LAB__text__0013e068; // [自动静态注释] 条件判断/分支
    uVar4 = (ulong)param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
    local_28 = *(undefined8 *)(uVar4 * 8 + 0x723e20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar1 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),&local_28); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (lVar1 == 0) goto LAB__text__0013e068; // [自动静态注释] 条件判断/分支
    *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
    local_28 = *(undefined8 *)(uVar4 * 8 + 0x723e78); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar1 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),&local_28); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (lVar1 == 0) goto LAB__text__0013e068; // [自动静态注释] 条件判断/分支
    *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
    local_28 = *(undefined8 *)(uVar4 * 8 + 0x723ed0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar1 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),&local_28); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (lVar1 == 0) goto LAB__text__0013e068; // [自动静态注释] 条件判断/分支
    *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
    local_28 = *(undefined8 *)(uVar4 * 8 + 0x723f28); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar1 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),&local_28); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (lVar1 == 0) goto LAB__text__0013e068; // [自动静态注释] 条件判断/分支
    *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
    local_28 = *(undefined8 *)(uVar4 * 8 + 0x723fd8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar1 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),&local_28); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (lVar1 == 0) goto LAB__text__0013e068; // [自动静态注释] 条件判断/分支
    bVar2 = *(byte *)(lVar1 + 0x58); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar3 = 0x724088; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(byte *)(lVar1 + 0x58) = bVar2 & 0xfe;
  local_28 = *(undefined8 *)(lVar3 + (ulong)param_2 * 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar1 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),&local_28); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (lVar1 != 0) { // [自动静态注释] 条件判断/分支
    *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
LAB__text__0013e068: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
} // [自动静态注释] 作用域/控制流边界


