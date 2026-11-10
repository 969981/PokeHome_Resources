/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00367AD0
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00467ad0; name: FUN_.text__00467ad0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00467ad0(long *param_1,uint param_2,int param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 *puVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte *pbVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte *pbVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte *pbVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  size_t __n; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  pbVar7 = (byte *)param_1[0x12]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar3 = *(int *)(_DAT_008a4ac0 + (ulong)param_2 * 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (pbVar7 == (byte *)0x0) { // [自动静态注释] 条件判断/分支
    if (iVar3 == param_3) { // [自动静态注释] 条件判断/分支
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    __n = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    bVar4 = *pbVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    __n = (size_t)bVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = (uint)bVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (bVar4 < 2) { // [自动静态注释] 条件判断/分支
      uVar2 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    uVar6 = (ulong)uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    pbVar9 = pbVar7 + (__n & 0xfc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar10 = uVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    pbVar8 = pbVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      pbVar9 = pbVar9 + 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      pbVar8 = pbVar8 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((uint)*pbVar8 == (param_2 & 0xff)) { // [自动静态注释] 条件判断/分支
        if (*(int *)pbVar9 == param_3) { // [自动静态注释] 条件判断/分支
          return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
        } // [自动静态注释] 作用域/控制流边界
        goto LAB__text__00467b88; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      uVar10 = uVar10 - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (uVar10 != 0); // [自动静态注释] 循环/迭代
    if (iVar3 == param_3) { // [自动静态注释] 条件判断/分支
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
LAB__text__00467b88: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    pbVar9 = pbVar7 + ((ulong)(uint)bVar4 & 0xfc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      pbVar9 = pbVar9 + 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      pbVar7 = pbVar7 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((uint)*pbVar7 == (param_2 & 0xff)) goto LAB__text__00467c30; // [自动静态注释] 条件判断/分支
      uVar6 = uVar6 - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (uVar6 != 0); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  lVar1 = __n + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = ((uint)lVar1 & 0x1fc) + 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar5 = (undefined1 *)FUN__text__00400f80(0,uVar2 + (uint)lVar1 * 4); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (puVar5 != (undefined1 *)0x0) { // [自动静态注释] 条件判断/分支
    if (param_1[0x12] != 0) { // [自动静态注释] 条件判断/分支
      memcpy(puVar5 + 1,(void *)(param_1[0x12] + 1),__n); // [自动静态注释] 内存复制、清零或移动
      memcpy(puVar5 + uVar2,(void *)(param_1[0x12] + (ulong)(((uint)__n & 0xfc) + 4)),__n << 2); // [自动静态注释] 内存复制、清零或移动
      FUN__text__00400fc0(0,param_1[0x12]); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    puVar5[lVar1] = (char)param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    pbVar9 = puVar5 + __n * 4 + (ulong)uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *puVar5 = (char)lVar1;
    param_1[0x12] = (long)puVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__00467c30: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(int *)pbVar9 = param_3;
  } // [自动静态注释] 作用域/控制流边界
                    /* WARNING: Could not recover jumptable at 0x00467c5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x188))(param_1,0,0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


