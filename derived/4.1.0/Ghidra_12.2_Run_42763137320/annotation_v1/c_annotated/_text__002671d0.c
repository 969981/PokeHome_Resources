/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_001671D0
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002671d0; name: FUN_.text__002671d0
 */


void FUN__text__002671d0(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  byte *pbVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_158 [8]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_150 [8]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_148 [8]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_140 [8]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_138 [8]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_130 [8]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_128 [8]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_120 [8]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_118 [8]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_110 [8]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_108 [8]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_100 [8]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_f8 [8]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_f0 [8]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_e8 [8]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_e0 [8]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_d8 [8]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_d0 [8]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_c8 [8]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_c0 [8]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_b8 [8]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_b0 [8]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_a8 [8]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_a0 [8]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_98 [8]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_90 [8]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_88 [8]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_80 [8]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_78 [8]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_70 [16]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  memcpy(auStack_158,(void *)0x72ce70,0xf0); // [自动静态注释] 内存复制、清零或移动
  lVar2 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),auStack_158); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
  lVar2 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),auStack_150); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
  lVar2 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),auStack_148); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
  lVar2 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),auStack_140); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
  lVar2 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),auStack_138); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
  lVar2 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),auStack_130); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
  lVar2 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),auStack_128); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
  lVar2 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),auStack_120); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
  lVar2 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),auStack_118); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
  lVar2 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),auStack_110); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
  lVar2 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),auStack_108); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
  lVar2 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),auStack_100); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
  lVar2 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),auStack_f8); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
  lVar2 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),auStack_f0); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
  lVar2 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),auStack_e8); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
  lVar2 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),auStack_e0); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
  lVar2 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),auStack_d8); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
  lVar2 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),auStack_d0); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
  lVar2 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),auStack_c8); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
  lVar2 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),auStack_c0); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
  lVar2 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),auStack_b8); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
  lVar2 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),auStack_b0); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
  lVar2 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),auStack_a8); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
  lVar2 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),auStack_a0); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
  lVar2 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),auStack_98); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
  lVar2 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),auStack_90); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
  lVar2 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),auStack_88); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
  lVar2 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),auStack_80); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
  lVar2 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),auStack_78); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
  lVar2 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),auStack_70); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
  lVar2 = FUN__text__00321ac0(); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (lVar2 == 0) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  lVar2 = FUN__text__00321ac0(); // [自动静态注释] 调用尚未恢复正式名称的函数
  pbVar1 = &DAT__text__00193772 + lVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  bVar7 = *pbVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = (ulong)bVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (bVar7 < 0x1f) { // [自动静态注释] 条件判断/分支
    if (bVar7 == 0) { // [自动静态注释] 条件判断/分支
      bVar7 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      goto LAB__text__002675a4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar4 = 0x1e; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *pbVar1 = 0x1e;
  } // [自动静态注释] 作用域/控制流边界
  uVar9 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar8 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  piVar5 = (int *)(&DAT__text__00193774 + lVar2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  do { // [自动静态注释] 循环/迭代
    if (*piVar5 != 0) { // [自动静态注释] 条件判断/分支
      uVar6 = *(undefined8 *)(param_1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar2 = param_1 + uVar8 * 0x660 + 0x6d0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar3 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),auStack_158 + uVar8 * 8); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__003d13e8(lVar2,uVar6,uVar3,0); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__003d2848(lVar2,piVar5,0); // [自动静态注释] 调用尚未恢复正式名称的函数
      lVar2 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),auStack_158 + uVar8 * 8); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar8 = (ulong)((int)uVar8 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) | 1;
      uVar4 = (ulong)*pbVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    bVar7 = (byte)uVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar9 = uVar9 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    piVar5 = piVar5 + 7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } while (uVar9 < uVar4); // [自动静态注释] 循环/迭代
LAB__text__002675a4: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *pbVar1 = bVar7;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


