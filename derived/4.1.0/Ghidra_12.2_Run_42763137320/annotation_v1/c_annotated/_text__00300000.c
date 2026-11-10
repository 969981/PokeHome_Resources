/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00200000
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00300000; name: FUN_.text__00300000
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00300000(long *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  ulong uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  param_1[7] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar5 = _DAT_0089f690; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 8) = 0;
  uVar1 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = uVar1 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[4] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[5] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 6) = 0;
  *param_1 = lVar5 + 0x10;
  lVar5 = _DAT_008a2a10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((uVar1 == 0) || (*(long *)(uVar1 + 0x98) == 0)) { // [自动静态注释] 条件判断/分支
    lVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar3 = *(long *)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  lVar2 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 10) = 0;
  *param_1 = lVar5 + 0x10;
  param_1[1] = lVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[9] = lVar5 + 0x48; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar4 = param_1 + 0xb; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  do { // [自动静态注释] 循环/迭代
    lVar5 = 0x1e; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar3 = lVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      lVar5 = lVar5 + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 *)((long)param_1 + lVar3 + 0x318) = 0;
      *(undefined8 *)((long)param_1 + lVar3 + 0x310) = 0;
      *(undefined8 *)((long)param_1 + lVar3 + 0x324) = 0;
      *(undefined8 *)((long)param_1 + lVar3 + 0x308) = 0;
      *(undefined8 *)((long)param_1 + lVar3 + 0x300) = 0;
      *(undefined8 *)((long)param_1 + lVar3 + 0x2f8) = 0;
      *(undefined8 *)((long)param_1 + lVar3 + 0x2f0) = 0;
      *(undefined4 *)((long)param_1 + lVar3 + 800) = 3;
      *(undefined8 *)((long)param_1 + lVar3 + 0x330) = 0;
      *(undefined2 *)((long)param_1 + lVar3 + 0x338) = 0;
      *(undefined1 *)((long)param_1 + lVar3 + 0x32c) = 0;
      *(undefined4 *)((long)param_1 + lVar3 + 0x340) = 0xffffffff;
      *(undefined8 *)((long)param_1 + lVar3 + 0x348) = 0;
      *(undefined1 *)((long)param_1 + lVar3 + 0x350) = 0;
      *(undefined4 *)((long)param_1 + lVar3 + 900) = 0;
      *(undefined8 *)((long)param_1 + lVar3 + 0x354) = 0;
      *(undefined8 *)((long)param_1 + lVar3 + 0x35c) = 0;
      *(undefined8 *)((long)param_1 + lVar3 + 0x364) = 0;
      *(undefined8 *)((long)param_1 + lVar3 + 0x36c) = 0;
      *(undefined8 *)((long)param_1 + lVar3 + 0x374) = 0;
      *(undefined8 *)((long)param_1 + lVar3 + 0x37c) = 0;
      lVar3 = lVar3 + 0x330; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (lVar5 != 0); // [自动静态注释] 循环/迭代
    plVar4 = plVar4 + 0xbf4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar2 = lVar2 + 0x5fa0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } while (plVar4 != param_1 + 0xe01fb); // [自动静态注释] 循环/迭代
  param_1[0xe01fb] = 0x12c00000000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  memset(param_1 + 0xe01fc,0,0x2028); // [自动静态注释] 内存复制、清零或移动
  nn::os::InitializeMutex((MutexType *)(param_1 + 0xe0601),false,0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  memset(param_1 + 0xb,0,0x700f80); // [自动静态注释] 内存复制、清零或移动
  FUN__text__00300180(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


