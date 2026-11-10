/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003E5550
 * 用途/行为：用途尚未确认；代码可观察到：同步/原子操作, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004e5550; name: FUN_.text__004e5550
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004e5550(long *param_1,undefined8 param_2,long param_3,long param_4,long param_5, // [自动静态注释] 调用尚未恢复正式名称的函数
                        undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9, // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                        undefined4 param_10,undefined4 param_11) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  int *piVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_80; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_78; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_70; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_60; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  FUN__text__00446d98(param_1,param_6,param_7,param_8,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__004ec468(param_1 + 0xb,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_80 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_78 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_70 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_68 = 0xff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_60 = 0xff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_58 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__0046bd38(param_1 + 0xe,&local_80); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar4 = _DAT_008a4438; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x1b] = param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x1c] = param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x1f] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x1d] = param_5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x1e] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 0x20) = 0;
  *param_1 = lVar4 + 0x10;
  param_1[0xb] = lVar4 + 0xd0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0xe] = lVar4 + 0x140; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__004e6710(param_1 + 0x21); // [自动静态注释] 调用尚未恢复正式名称的函数
  param_1[0x2f] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x30] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 0x32) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x31) = param_10;
  *(undefined4 *)((long)param_1 + 0x18c) = param_11;
  *(byte *)((long)param_1 + 0x194) = *(byte *)((long)param_1 + 0x194) & 0xf0 | 4;
  piVar1 = (int *)(param_1[0x1c] + 0x24); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  do { // [自动静态注释] 循环/迭代
    cVar2 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar3) { // [自动静态注释] 条件判断/分支
      *piVar1 = *piVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar2 != '\0'); // [自动静态注释] 循环/迭代
  if ((int)param_1[0x16] == 0) { // [自动静态注释] 条件判断/分支
    *(undefined4 *)(param_1 + 0x11) = 0;
    *(undefined1 *)(param_1 + 0x12) = 0xff;
    *(undefined1 *)(param_1 + 0x13) = 0xff;
    param_1[0x14] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1[0xf] = param_1[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)((long)param_1 + 0x2c);
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


