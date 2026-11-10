/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0035B980
 * 用途/行为：用途尚未确认；代码可观察到：同步/原子操作, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0045b980; name: FUN_.text__0045b980
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0045b980(undefined8 *param_1,undefined4 param_2,undefined8 param_3, // [自动静态注释] 调用尚未恢复正式名称的函数
                        undefined4 param_4) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  char cVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *param_1 = param_3;
  puVar3 = _DAT_008a4940; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  do { // [自动静态注释] 循环/迭代
    uVar4 = *puVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    cVar1 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar2 = (bool)ExclusiveMonitorPass(puVar3,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar2) { // [自动静态注释] 条件判断/分支
      *puVar3 = uVar4 + 1;
      cVar1 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar1 != '\0'); // [自动静态注释] 循环/迭代
  *(undefined4 *)(param_1 + 2) = param_4;
  param_1[1] = uVar4 + 1 & 0xffffffffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[4] = 0xffffffffffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined2 *)((long)param_1 + 0x6c) = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0x17) = param_2;
  param_1[9] = 0x3f80000000000000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[10] = 0xffff3f800000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 0xd) = 0x3f800000;
  param_1[5] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[6] = 0x3f800000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[7] = 0x3f800000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[8] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0xb] = 0x3f800000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0xc] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined1 *)((long)param_1 + 0x6e) = 1;
  param_1[0xe] = 0x3f8000003f800000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0xf] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined1 *)(param_1 + 0x16) = 0x32;
  param_1[0x13] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x14] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x10] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x11] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__00451cac(param_1 + 0x18); // [自动静态注释] 调用尚未恢复正式名称的函数
  param_1[0x1d] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 0x1e) = 0;
  *(undefined4 *)((long)param_1 + 0x10c) = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  param_1[4] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined1 *)(param_1 + 0x21) = 0;
  param_1[0x1f] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x20] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0xf] = _DAT_008a47f0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


