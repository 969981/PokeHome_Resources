/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0050E9C0
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0060e9c0; name: FUN_.text__0060e9c0
 */


void FUN__text__0060e9c0(long param_1,char param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ushort uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  short sVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint __c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char *pcVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char *pcVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_308 [8]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *local_300; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_2f6 [662]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  memset(auStack_2f6,0,0x296); // [自动静态注释] 内存复制、清零或移动
  FUN__text__0060e784(auStack_308,auStack_2f6); // [自动静态注释] 调用尚未恢复正式名称的函数
  puVar9 = local_300; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)((long)local_300 + 10) = 0;
  *(undefined8 *)((long)local_300 + 2) = 0;
  *(undefined2 *)local_300 = 4;
  *(undefined8 *)((long)local_300 + 0x12) = 0;
  *(undefined8 *)((long)local_300 + 0x1a) = 0;
  *(undefined8 *)((long)local_300 + 0x22) = 0;
  *(undefined8 *)((long)local_300 + 0x2a) = 0;
  *(undefined8 *)((long)local_300 + 0x32) = 0;
  *(undefined8 *)((long)local_300 + 0x3a) = 0;
  *(undefined8 *)((long)local_300 + 0x42) = 0;
  *(undefined8 *)((long)local_300 + 0x4a) = 0;
  *(undefined8 *)((long)local_300 + 0x52) = 0;
  *(undefined8 *)((long)local_300 + 0x5a) = 0;
  *(undefined8 *)((long)local_300 + 0x62) = 0;
  *(undefined8 *)((long)local_300 + 0x6a) = 0;
  *(undefined8 *)((long)local_300 + 0x72) = 0;
  *(undefined8 *)((long)local_300 + 0x7a) = 0;
  *(undefined8 *)((long)local_300 + 0x82) = 0;
  *(undefined8 *)((long)local_300 + 0x8a) = 0;
  *(undefined8 *)((long)local_300 + 0x92) = 0;
  *(undefined8 *)((long)local_300 + 0x9a) = 0;
  *(undefined8 *)((long)local_300 + 0xa2) = 0;
  *(undefined8 *)((long)local_300 + 0xaa) = 0;
  *(undefined8 *)((long)local_300 + 0xb2) = 0;
  *(undefined8 *)((long)local_300 + 0xba) = 0;
  *(undefined8 *)((long)local_300 + 0xc2) = 0;
  *(undefined8 *)((long)local_300 + 0xca) = 0;
  local_300[0x1a] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)((long)local_300 + 2) = 0;
  *(undefined4 *)((long)local_300 + 10) = 0;
  *(undefined4 *)((long)local_300 + 0xe) = 0xc400d0;
  *(undefined2 *)((long)local_300 + 0xd6) = 0;
  local_300[0x1b] = 0x808080808080808; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = (*(undefined8 **)(param_1 + 8))[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *local_300 = **(undefined8 **)(param_1 + 8);
  local_300[1] = uVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined2 *)(local_300 + 2) = *(undefined2 *)(*(long *)(param_1 + 8) + 0x10);
  memcpy((undefined2 *)((long)local_300 + 0x12),(void *)(*(long *)(param_1 + 8) + 0x12),0xc4); // [自动静态注释] 内存复制、清零或移动
  *(undefined2 *)((long)puVar9 + 0xd6) = 0;
  lVar7 = *(long *)(param_1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(short *)(lVar7 + 0xd6) == 0) { // [自动静态注释] 条件判断/分支
    uVar8 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    pcVar10 = (char *)(lVar7 + 0xd8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      cVar4 = *pcVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (cVar4 != param_2) { // [自动静态注释] 条件判断/分支
        pcVar11 = (char *)(local_300 + 0x1b); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if ((ulong)*(ushort *)((long)local_300 + 0xd6) != 0) { // [自动静态注释] 条件判断/分支
          do { // [自动静态注释] 循环/迭代
            pcVar11 = pcVar11 + (ulong)*(ushort *)(pcVar11 + 1) + 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } while ((ulong)((long)pcVar11 - (long)(local_300 + 2)) < // [自动静态注释] 循环/迭代
                   (ulong)*(ushort *)((long)local_300 + 0xd6) + 200); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        } // [自动静态注释] 作用域/控制流边界
        uVar5 = *(ushort *)(pcVar10 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        memset(pcVar11 + 3,0,(ulong)uVar5); // [自动静态注释] 内存复制、清零或移动
        *pcVar11 = cVar4;
        *(ushort *)(pcVar11 + 1) = uVar5;
        iVar2 = (uint)uVar5 + (uint)*(ushort *)((long)local_300 + 0xd6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar1 = iVar2 + 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        sVar6 = (short)uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(short *)((long)local_300 + 0xd6) = sVar6;
        __c = 0x10 - (iVar2 + 0xbU & 0xf); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(short *)((long)local_300 + 0xe) = (short)__c + sVar6 + 200;
        memset((void *)((long)local_300 + ((ulong)uVar1 & 0xffff) + 0xd8),__c,(ulong)__c); // [自动静态注释] 内存复制、清零或移动
        cVar4 = pcVar10[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined2 *)pcVar11 = *(undefined2 *)pcVar10;
        pcVar11[2] = cVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        memcpy(pcVar11 + 3,pcVar10 + 3,(ulong)uVar5); // [自动静态注释] 内存复制、清零或移动
        lVar7 = *(long *)(param_1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      pcVar10 = pcVar10 + (ulong)*(ushort *)(pcVar10 + 1) + 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (pcVar10 + (-0x10 - lVar7) < (char *)((ulong)*(ushort *)(lVar7 + 0xd6) + 200)); // [自动静态注释] 循环/迭代
    uVar8 = (ulong)*(ushort *)((long)local_300 + 0xd6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar9 = local_300; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  uVar1 = 0x10 - ((int)uVar8 + 8U & 0xf); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(short *)((long)puVar9 + 0xe) = (short)uVar1 + (short)uVar8 + 200;
  memset((void *)((long)local_300 + uVar8 + 0xd8),uVar1,(ulong)uVar1); // [自动静态注释] 内存复制、清零或移动
  if ((*(void **)(param_1 + 8) != (void *)0x0) && (local_300 != (undefined8 *)0x0)) { // [自动静态注释] 条件判断/分支
    memcpy(*(void **)(param_1 + 8),local_300,(ulong)*(ushort *)((long)local_300 + 0xe) + 0x10); // [自动静态注释] 内存复制、清零或移动
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__0060e79c(auStack_308); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


